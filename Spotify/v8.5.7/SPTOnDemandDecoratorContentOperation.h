//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"

@protocol EXP_HUBContentOperationDelegate, SPTOnDemandSet;

@interface SPTOnDemandDecoratorContentOperation : NSObject <EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    id <SPTOnDemandSet> _onDemandSet;
}

@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isGlueHeaderComponentModelBuilder:(id)arg1;
- (void)recursivelyDecorateComponentModelBuilders:(id)arg1;
- (void)decorateHeaderComponentModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithOnDemandSet:(id)arg1;

@end
