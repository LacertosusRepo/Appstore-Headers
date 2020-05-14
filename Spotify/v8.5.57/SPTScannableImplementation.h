//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannable-Protocol.h"

@class NSString, NSURL, UIImage;

@interface SPTScannableImplementation : NSObject <SPTScannable>
{
    NSURL *_entityURL;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 withData:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

