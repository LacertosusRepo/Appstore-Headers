//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDXSeamlessSignInLogger.h"
#import "YTResponder.h"

@class GIMMe, NSString, YTSeamlessSignInVEStandInViewController;

@interface YTSeamlessSignIn : NSObject <YTResponder, MDXSeamlessSignInLogger>
{
    id <NSObject> _autoshowActionHandle;
    id <NSObject> _showHintActionHandle;
    YTSeamlessSignInVEStandInViewController *_simulatedVEPage;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)seamlessSignInVisualElementIsPage:(long long)arg1;
- (int)pageVETypeForSeamlessSignInVisualElement:(long long)arg1;
- (int)VETypeForSeamlessSignInVisualElement:(long long)arg1;
- (id)parentVEPageForVisualElement:(long long)arg1;
- (void)logVisualElementTapped:(long long)arg1;
- (void)logVisualElementShown:(long long)arg1;
- (void)logNewSeamlessSignInSessionIDEncountered:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void)showSeamlessSignInHintWithAccountButton:(id)arg1 firstResponder:(id)arg2;
- (void)stopShowingHintWhenNeeded;
- (void)startShowingHintWhenNeededWithAccountButton:(id)arg1 firstResponder:(id)arg2;
- (void)stopShowingAutomatically;
- (void)startShowingAutomaticallyWithPreAction:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)completionBlock;
- (_Bool)showIfNeeded;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
