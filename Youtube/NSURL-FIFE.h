//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@class NSString;

@interface NSURL (FIFE)
- (_Bool)isFIFEUrl;
- (id)FIFEURLRequestingCenteredCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToMaxSize:(double)arg1;
- (id)FIFEURLRequestingDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingDimensions:(struct CGSize)arg1 stripExistingOptions:(_Bool)arg2;
- (id)FIFEURLRequestingExactDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingMaxSize:(double)arg1;
- (id)URLByRemovingFIFEInfo;
- (id)FIFEArgumentsArray;
@property(readonly, copy, nonatomic) NSString *FIFEArgumentsString;
- (struct CGSize)maximumFIFEImageSize;
- (id)FIFEURLWithArguments:(id)arg1 stripExistingOptions:(_Bool)arg2;
- (id)FIFELegacyURLWithArgumentsString:(id)arg1;
- (id)legacyFIFEArgumentsString;
- (id)URLByAppendingTrailingSlash;
- (_Bool)isLegacyFIFEURLWithArguments;
- (_Bool)isLegacyFIFEURL;
- (unsigned long long)numberOfPathComponentsInLegacyFIFEURL;
@end

