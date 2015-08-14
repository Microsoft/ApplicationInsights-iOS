#import <Foundation/Foundation.h>
#import "MSAINullability.h"

@class MSAIConfiguration;

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT char *MSAISafeJsonEventsString;

/**
 *  Prepares telemetry data and forwards it to the persistence layer. Once data has been persisted it will be sent by the sender automatically.
 */
@interface MSAIChannel : NSObject

- (instancetype)initWithConfiguration:(MSAIConfiguration *)configuration;

@end
NS_ASSUME_NONNULL_END
