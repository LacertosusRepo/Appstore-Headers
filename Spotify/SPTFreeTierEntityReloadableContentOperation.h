//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EXP_HUBContentOperation.h"
#import "SPTFreeTierEntitySignalObserver.h"

@class NSString;

@interface SPTFreeTierEntityReloadableContentOperation : NSObject <SPTFreeTierEntitySignalObserver, EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> delegate;
}

@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)next:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithReloadSignal:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

