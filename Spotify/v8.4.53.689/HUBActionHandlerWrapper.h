//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBActionHandler.h"
#import "HUBAsyncActionWrapperDelegate.h"

@class HUBInitialViewModelRegistry, HUBViewModelLoaderImplementation, NSMutableSet;

@interface HUBActionHandlerWrapper : NSObject <HUBAsyncActionWrapperDelegate, HUBActionHandler>
{
    id <HUBActionHandler> _actionHandler;
    id <HUBActionRegistry> _actionRegistry;
    HUBInitialViewModelRegistry *_initialViewModelRegistry;
    HUBViewModelLoaderImplementation *_viewModelLoader;
    NSMutableSet *_ongoingAsyncActions;
}

@property(readonly, nonatomic) NSMutableSet *ongoingAsyncActions; // @synthesize ongoingAsyncActions=_ongoingAsyncActions;
@property(readonly, nonatomic) HUBViewModelLoaderImplementation *viewModelLoader; // @synthesize viewModelLoader=_viewModelLoader;
@property(readonly, nonatomic) HUBInitialViewModelRegistry *initialViewModelRegistry; // @synthesize initialViewModelRegistry=_initialViewModelRegistry;
@property(readonly, nonatomic) id <HUBActionRegistry> actionRegistry; // @synthesize actionRegistry=_actionRegistry;
@property(readonly, nonatomic) id <HUBActionHandler> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)actionDidFinish:(id)arg1 withContext:(id)arg2 chainToActionWithIdentifier:(id)arg3 customData:(id)arg4;
- (_Bool)handleActionWithContext:(id)arg1;
- (id)initWithActionHandler:(id)arg1 actionRegistry:(id)arg2 initialViewModelRegistry:(id)arg3 viewModelLoader:(id)arg4;

@end

