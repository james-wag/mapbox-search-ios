// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>

/** User activity reporter options */
NS_SWIFT_NAME(UserActivityReporterOptions)
__attribute__((visibility ("default")))
@interface MBXSUserActivityReporterOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAccessToken:(nonnull NSString *)accessToken
                                  userAgent:(nonnull NSString *)userAgent
                                  eventsUrl:(nullable NSString *)eventsUrl;

- (nonnull instancetype)initWithAccessToken:(nonnull NSString *)accessToken
                                  userAgent:(nonnull NSString *)userAgent
                                  eventsUrl:(nullable NSString *)eventsUrl
                         sendEventsDebounce:(uint64_t)sendEventsDebounce
                         sendEventsInterval:(uint64_t)sendEventsInterval;

/**
 * You need a Mapbox access token to use any of Mapbox's tools, APIs, or SDKs. Mapbox uses access tokens
 * to associate your account with your requests to Mapbox API resources. You can find all your access tokens,
 * create new ones, or delete existing ones on your Access tokens page - https://account.mapbox.com/access-tokens/.
 *
 * \sa https://docs.mapbox.com/help/glossary/access-token/
 */
@property (nonatomic, readonly, nonnull, copy) NSString *accessToken;

/**
 * A characteristic string that allows telemetry to identify the sender. Enables telemetry events if set.
 * Available in the 'userAgent' property in the event template created by SearchEngine::createEventTemplate().
 */
@property (nonatomic, readonly, nonnull, copy) NSString *userAgent;

/** Base URL for events service. Default is "https://events.mapbox.com". */
@property (nonatomic, readonly, nullable, copy) NSString *eventsUrl;

/** Interval in seconds before sending an initial activity event to the server. Default is 5 seconds. */
@property (nonatomic, readonly) uint64_t sendEventsDebounce;

/** Interval in seconds for a repeated activity event for each component. Default is 24 hours. */
@property (nonatomic, readonly) uint64_t sendEventsInterval;


- (BOOL)isEqualToUserActivityReporterOptions:(nonnull MBXSUserActivityReporterOptions *)other;

@end
