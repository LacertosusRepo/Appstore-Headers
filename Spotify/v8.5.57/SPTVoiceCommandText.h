//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTVoiceCommandText : NSObject
{
    NSString *_title;
    NSString *_subtitle;
}

@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;

@end

