//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SPTStorylinesProgressionManagerDelegate;

@interface SPTStorylinesProgressionManager : NSObject
{
    id <SPTStorylinesProgressionManagerDelegate> _delegate;
    unsigned long long _currentCardIndex;
    NSTimer *_progressTimer;
    double _timeElapsed;
    unsigned long long _cardCount;
}

@property(nonatomic) unsigned long long cardCount; // @synthesize cardCount=_cardCount;
@property(nonatomic) double timeElapsed; // @synthesize timeElapsed=_timeElapsed;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(readonly, nonatomic) unsigned long long currentCardIndex; // @synthesize currentCardIndex=_currentCardIndex;
@property(nonatomic) __weak id <SPTStorylinesProgressionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerTicked:(id)arg1;
- (void)cancelCurrentTimer;
- (void)startCurrentTimer;
- (void)shouldStartStorylines:(_Bool)arg1;
- (_Bool)didEndStoryline;
- (void)regressPreviousWithAutoplay:(_Bool)arg1;
- (void)progressNextWithAutoplay:(_Bool)arg1;
- (_Bool)canAdvanceCard;
- (void)setCurrentCardIndex:(unsigned long long)arg1;
- (void)setupProgressWithCardCount:(long long)arg1;
- (id)init;

@end

