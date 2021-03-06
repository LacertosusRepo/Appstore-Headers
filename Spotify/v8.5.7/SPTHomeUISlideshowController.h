//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, NSDate, NSMapTable, NSMutableDictionary, NSString, NSTimer;
@protocol SPTHomeUISlideshowControllerDelegate;

@interface SPTHomeUISlideshowController : NSObject
{
    _Bool _paused;
    unsigned long long _currentIndex;
    id <SPTHomeUISlideshowControllerDelegate> _delegate;
    NSArray *_componentIdentifiers;
    NSMapTable *_childComponentTimeHandlers;
    NSMutableDictionary *_childComponentDurations;
    double _timeLapsed;
    double _duration;
    NSTimer *_timer;
    NSString *_currentComponentIdentifier;
    CADisplayLink *_displayLink;
    NSDate *_referenceDate;
}

@property(retain, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSString *currentComponentIdentifier; // @synthesize currentComponentIdentifier=_currentComponentIdentifier;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeLapsed; // @synthesize timeLapsed=_timeLapsed;
@property(retain, nonatomic) NSMutableDictionary *childComponentDurations; // @synthesize childComponentDurations=_childComponentDurations;
@property(retain, nonatomic) NSMapTable *childComponentTimeHandlers; // @synthesize childComponentTimeHandlers=_childComponentTimeHandlers;
@property(retain, nonatomic) NSArray *componentIdentifiers; // @synthesize componentIdentifiers=_componentIdentifiers;
@property(nonatomic) __weak id <SPTHomeUISlideshowControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)setDuration:(id)arg1 forComponentIdentifier:(id)arg2;
- (void)setTimeHandler:(CDUnknownBlockType)arg1 forComponentIdentifier:(id)arg2;
- (void)forceUpdate;
- (void)updateDelegateForProgress;
- (void)displayLinkUpdate;
- (void)updateToIndex:(unsigned long long)arg1 shouldScroll:(_Bool)arg2;
- (void)userDidSwipeToCellAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)setForComponentView:(id)arg1;

@end

