//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBActionFactory.h"

@interface SPTContextMenuHubActionFactory : NSObject <HUBActionFactory>
{
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void).cxx_destruct;
- (id)createActionForName:(id)arg1;
- (id)initWithContextMenuFeature:(id)arg1 logCenter:(id)arg2;

@end
