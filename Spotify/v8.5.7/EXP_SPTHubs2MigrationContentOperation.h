//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"

@protocol EXP_HUBContentOperationDelegate;

@interface EXP_SPTHubs2MigrationContentOperation : NSObject <EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performMigrationWithComponentModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;

@end

