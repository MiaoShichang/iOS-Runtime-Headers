/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrefetchConfiguration : NSObject {
    BOOL  _backgroundFetchEnabled;
    unsigned int  _maximumFavoritesFeedsToPrefetch;
    double  _minimumBackgroundFetchInterval;
    NTPBPrefetchConfig * _pbConfig;
    BOOL  _shouldPrefetchForYouFeed;
}

@property (getter=isBackgroundFetchEnabled, nonatomic, readonly) BOOL backgroundFetchEnabled;
@property (nonatomic, readonly) unsigned int maximumFavoritesFeedsToPrefetch;
@property (nonatomic, readonly) double minimumBackgroundFetchInterval;
@property (nonatomic, readonly) BOOL shouldPrefetchForYouFeed;

- (void).cxx_destruct;
- (unsigned int)hash;
- (id)initWithDefaults;
- (id)initWithPBPrefetchConfig:(id)arg1;
- (BOOL)isBackgroundFetchEnabled;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)maximumFavoritesFeedsToPrefetch;
- (double)minimumBackgroundFetchInterval;
- (BOOL)shouldPrefetchForYouFeed;

@end
