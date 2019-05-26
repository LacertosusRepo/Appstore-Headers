//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SPTShareAlertModel : NSObject
{
    NSString *_title;
    NSString *_message;
    NSArray *_buttonsAndHandlers;
    long long _cancelIndex;
}

@property(nonatomic) long long cancelIndex; // @synthesize cancelIndex=_cancelIndex;
@property(retain, nonatomic) NSArray *buttonsAndHandlers; // @synthesize buttonsAndHandlers=_buttonsAndHandlers;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3 cancelButtonIndex:(long long)arg4;

@end

