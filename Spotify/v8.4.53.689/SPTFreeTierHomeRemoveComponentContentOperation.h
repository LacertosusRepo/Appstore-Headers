//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBContentOperation.h"
#import "SPTFreeTierHomeViewModelDelegate.h"

@class NSString;

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

