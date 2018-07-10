#include <gmock/gmock.h>
#include "Mobile.h"

using ::testing::Return;

class MockedCamera : public Camera {
public:
	MOCK_METHOD0( ON, bool() );
	virtual ~MockedCamera() { }
};

TEST ( MobileTest, testPowerOnWhenCameraOnFunctionsNormally ) {	
   {
	MockedCamera *ptrMockedCamera = new MockedCamera();	
	
	Mobile mobile(ptrMockedCamera);

	//Stubbing - hardcoding the response of dependent method
	EXPECT_CALL ( *ptrMockedCamera, ON() )
		.Times( 1 )
		.WillOnce ( Return ( true ) );
	
	EXPECT_TRUE ( mobile.powerOn() );
   }
}

TEST ( MobileTest, testPowerOnWhenCameraOnFunctionsAbnormally ) {	

	MockedCamera *ptrMockedCamera = new MockedCamera();	
	
	Mobile mobile(ptrMockedCamera);

	//Stubbing - hardcoding the response of dependent method
	EXPECT_CALL ( *ptrMockedCamera, ON() )
		.Times( 1 )
		.WillOnce ( Return (false) );
	
	EXPECT_FALSE( mobile.powerOn() );

}
