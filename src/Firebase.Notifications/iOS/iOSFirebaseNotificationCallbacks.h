#import <Foundation/Foundation.h>
#include <Firebase/Firebase.h>
#include <UserNotifications/UserNotifications.h>

@interface FireNotificationCallbacks : NSObject<FIRMessagingDelegate, UNUserNotificationCenterDelegate>
@end
