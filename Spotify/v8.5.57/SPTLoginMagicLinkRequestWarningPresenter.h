//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDialogController, SPTLoginMagicLinkRequestWarningDialogLogger;

@interface SPTLoginMagicLinkRequestWarningPresenter : NSObject
{
    SPTLoginDialogController *_dialogController;
    SPTLoginMagicLinkRequestWarningDialogLogger *_logger;
}

@property(retain, nonatomic) SPTLoginMagicLinkRequestWarningDialogLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTLoginDialogController *dialogController; // @synthesize dialogController=_dialogController;
- (void).cxx_destruct;
- (void)presentMagicLinkRequestWarning:(CDUnknownBlockType)arg1;
- (id)initWithDialogController:(id)arg1 logger:(id)arg2;

@end

