//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer;

@interface SPTFreeTierLoginMessageCarouselViewModel : NSObject
{
    id <SPTFreeTierLoginMessageCarouselViewModelDelegate> _delegate;
    unsigned long long _direction;
    NSTimer *_timer;
    long long _currentPosition;
    NSArray *_messages;
}

@property(retain, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) long long currentPosition; // @synthesize currentPosition=_currentPosition;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) __weak id <SPTFreeTierLoginMessageCarouselViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)resetUpdating;
- (void)stopUpdating;
- (id)nextMessage;
- (void)startTimer;
- (id)initWithMessages:(id)arg1;

@end
