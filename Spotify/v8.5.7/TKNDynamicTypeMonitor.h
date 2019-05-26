//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface TKNDynamicTypeMonitor : NSObject
{
    NSString *_contentSizeCategory;
    double _accessibilityScale;
    NSMapTable *_labelsAndStyles;
}

+ (id)contentSizeCategoryFromAccessibilityScale:(id)arg1;
+ (id)accessibilityScaleFromContentSizeCategory:(id)arg1;
+ (id)defaultMonitor;
@property(retain, nonatomic) NSMapTable *labelsAndStyles; // @synthesize labelsAndStyles=_labelsAndStyles;
@property(readonly, nonatomic) double accessibilityScale; // @synthesize accessibilityScale=_accessibilityScale;
@property(retain, nonatomic) NSString *contentSizeCategory; // @synthesize contentSizeCategory=_contentSizeCategory;
- (void).cxx_destruct;
- (void)addLabel:(id)arg1 withTypeStyle:(id)arg2;
- (void)removeLabel:(id)arg1;
- (void)updateLabels;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)init;

@end

