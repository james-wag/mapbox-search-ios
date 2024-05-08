// This file is generated and will be overwritten automatically.

#import <Foundation/Foundation.h>
#import <MapboxCoreSearch/MBXSApiType.h>

/** SearchEngine options. */
NS_SWIFT_NAME(EngineOptions)
__attribute__((visibility ("default")))
@interface MBXSEngineOptions : NSObject

// This class provides custom init which should be called
- (nonnull instancetype)init NS_UNAVAILABLE;

// This class provides custom init which should be called
+ (nonnull instancetype)new NS_UNAVAILABLE;

- (nonnull instancetype)initWithAccessToken:(nonnull NSString *)accessToken
                                    baseUrl:(nullable NSString *)baseUrl
                                    apiType:(nullable NSNumber *)apiType
                                  userAgent:(nullable NSString *)userAgent
                                  eventsUrl:(nullable NSString *)eventsUrl;

/**
 * You need a Mapbox access token to use any of Mapbox's tools, APIs, or SDKs. Mapbox uses access tokens
 * to associate your account with your requests to Mapbox API resources. You can find all your access tokens,
 * create new ones, or delete existing ones on your Access tokens page - https://account.mapbox.com/access-tokens/.
 *
 * \sa https://docs.mapbox.com/help/glossary/access-token/
 */
@property (nonatomic, readonly, nonnull, copy) NSString *accessToken;

/** Base URL for server API. Default is "https://api.mapbox.com". */
@property (nonatomic, readonly, nullable, copy) NSString *baseUrl;

/** Server API type. Default is ApiType::Geocoding. */
@property (nonatomic, readonly, nullable) NSNumber *apiType;

/**
 * A characteristic string that allows telemetry to identify the sender. Enables telemetry events if set.
 * Available in the 'userAgent' property in the event template created by SearchEngine::createEventTemplate().
 */
@property (nonatomic, readonly, nullable, copy) NSString *userAgent;

/** Base URL for events service. Default is "https://events.mapbox.com". */
@property (nonatomic, readonly, nullable, copy) NSString *eventsUrl;


@end
