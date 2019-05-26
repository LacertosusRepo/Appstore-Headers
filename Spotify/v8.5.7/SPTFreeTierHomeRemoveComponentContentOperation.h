//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTFreeTierHomeViewModelDelegate-Protocol.h"

@class NSString;
@protocol EXP_HUBContentOperationDelegate;

@interface SPTFreeTierHomeRemoveComponentContentOperation : NSObject <SPTFreeTierHomeViewModelDelegate, EXP_HUBContentOperation>
{
    _Bool _skipTasteOnBoarding;
    _Bool _shouldRemoveWelcomeHeader;
    id <EXP_HUBContentOperationDelegate> delegate;
}

@property(nonatomic) _Bool shouldRemoveWelcomeHeader; // @synthesize shouldRemoveWelcomeHeader=_shouldRemoveWelcomeHeader;
@property(nonatomic) _Bool skipTasteOnBoarding; // @synthesize skipTasteOnBoarding=_skipTasteOnBoarding;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)removeWelcomeHeader;
- (void)didSkipTasteOnboarding;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

