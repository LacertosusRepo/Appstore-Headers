//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKUIResources, GCKUIStyleAttributesCastViews;

@interface GCKUIStyle : NSObject
{
    GCKUIResources *_uiResources;
    GCKUIStyleAttributesCastViews *_defaultCastViews;
    GCKUIStyleAttributesCastViews *_castViews;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) GCKUIStyleAttributesCastViews *castViews; // @synthesize castViews=_castViews;
- (void).cxx_destruct;
- (void)initDefaultShadowOffsets;
- (void)initDefaultColors;
- (void)initDefaultImages;
- (void)initDefaultFonts;
- (void)initDefaults;
- (void)contentSizeDidChange:(id)arg1;
- (void)dealloc;
- (void)applyStyle;
- (id)initWithAnalyticsEventLogger:(id)arg1 uiResources:(id)arg2;

@end
