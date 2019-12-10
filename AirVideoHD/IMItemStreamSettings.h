//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMediaInfoStream, InMethod_IMItem, NSString;

@interface IMItemStreamSettings : NSObject
{
    InMethod_IMItem *item;
    NSString *audioStreamName;
    NSString *subtitleStreamName;
}

+ (id)streamSettingsForItem:(id)arg1;
+ (void)itemStreamSettingsDidChange:(id)arg1;
+ (void)removeItemStreamSettingsForId:(id)arg1 except:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NSString *subtitleStreamName; // @synthesize subtitleStreamName;
@property(retain, nonatomic) NSString *audioStreamName; // @synthesize audioStreamName;
@property(readonly, nonatomic) __weak InMethod_IMItem *item; // @synthesize item;
- (void).cxx_destruct;
- (void)save;
@property(readonly, nonatomic) IMMediaInfoStream *subtitleStream;
@property(readonly, nonatomic) IMMediaInfoStream *audioStream;
- (id)initWithItem:(id)arg1;

@end
