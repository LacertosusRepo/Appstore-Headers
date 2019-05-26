//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBAsyncActionDelegate-Protocol.h"

@protocol HUBActionContext, HUBAsyncAction, HUBAsyncActionWrapperDelegate;

@interface HUBAsyncActionWrapper : NSObject <HUBAsyncActionDelegate>
{
    id <HUBAsyncActionWrapperDelegate> _delegate;
    id <HUBAsyncAction> _action;
    id <HUBActionContext> _context;
}

@property(readonly, nonatomic) id <HUBActionContext> context; // @synthesize context=_context;
@property(readonly, nonatomic) id <HUBAsyncAction> action; // @synthesize action=_action;
@property(nonatomic) __weak id <HUBAsyncActionWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionDidFinish:(id)arg1 chainToActionWithIdentifier:(id)arg2 customData:(id)arg3;
- (_Bool)perform;
- (id)initWithAction:(id)arg1 context:(id)arg2;

@end

