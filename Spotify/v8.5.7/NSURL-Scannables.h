//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Scannables)
+ (id)spt_jsonFormatQueryItem;
+ (id)spt_plainScannablesURLWithFormat:(unsigned long long)arg1 backgroundColor:(id)arg2 barColor:(unsigned long long)arg3 pixelWidth:(unsigned long long)arg4 uri:(id)arg5;
+ (id)spt_plainScannablesForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesGeneratorURLForEntityURL:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)spt_scannablesImageURLForEntityURL:(id)arg1 imageURL:(id)arg2;
+ (id)spt_scannablesUrlForID:(id)arg1;
+ (id)spt_scannablesSearchViewURL;
+ (id)spt_scannablesViewURL;
- (id)spt_scannablesImageURL;
- (id)spt_scannablesEntityURL;
@property(readonly, nonatomic, getter=spt_isSpotifyURL) _Bool spotifyURL;
- (id)spt_sourceForScannablesURL;
- (id)spt_scannablesURLWithSource:(id)arg1;
- (_Bool)spt_isScannablesImageURL;
@property(readonly, nonatomic, getter=spt_isScannablesViewURL) _Bool scannablesViewURL;
@end
