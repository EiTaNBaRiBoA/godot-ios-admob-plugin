//
// © 2024-present https://github.com/cengiz-pz
//

#ifndef banner_h
#define banner_h

#import "ad_format_base.h"
#import "load_ad_request.h"


typedef NS_ENUM(NSUInteger, AdPosition) {
	AdPositionTop,
	AdPositionBottom,
	AdPositionLeft,
	AdPositionRight,
	AdPositionTopLeft,
	AdPositionTopRight,
	AdPositionBottomLeft,
	AdPositionBottomRight,
	AdPositionCenter,
	AdPositionCustom = 999
};

@interface BannerAd : AdFormatBase <GADBannerViewDelegate>

@property (nonatomic, strong) GADBannerView* bannerView;
@property (nonatomic) GADAdSize adSize;
@property (nonatomic) AdPosition adPosition;
@property (nonatomic) BOOL isLoaded;

- (instancetype) initWithID:(NSString*) adId;
- (void) load:(LoadAdRequest*) adData;
- (void) destroy;
- (void) hide;
- (void) show;
- (int) getWidth;
- (int) getHeight;
- (int) getWidthInPixels;
- (int) getHeightInPixels;

@end

#endif /* banner_h */
