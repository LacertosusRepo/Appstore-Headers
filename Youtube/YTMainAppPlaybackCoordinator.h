//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDXScreenManagerObserver.h"
#import "YTPlaybackCoordinator.h"

@class GIMMe, MDXScreenManager, NSHashTable, NSString;

@interface YTMainAppPlaybackCoordinator : NSObject <MDXScreenManagerObserver, YTPlaybackCoordinator>
{
    MDXScreenManager *_MDXScreenManager;
    id <YTPlaybackController> _playbackController;
    NSHashTable *_observers;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
@property(readonly, nonatomic, getter=isInlinePlaybackSupported) _Bool inlinePlaybackSupported;
- (void)removePlaybackCoordinatorObserver:(id)arg1;
- (void)addPlaybackCoordinatorObserver:(id)arg1;
- (id)newControllerWithParentResponder:(id)arg1 overlayFactory:(id)arg2 playerView:(id)arg3 parentViewController:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

