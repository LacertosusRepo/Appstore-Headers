//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnDemandTrialDialogModel-Protocol.h"

@class NSString, NSURL;

@interface SPTOnDemandTrialFinishDialogModel : NSObject <SPTOnDemandTrialDialogModel>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
    NSURL *_imageURI;
}

@property(readonly, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)dismissText;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

