//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SPTFreeTierTasteOnboardingLogging : NSObject <NSCopying>
{
    NSString *_section;
    NSString *_contentSource;
    NSString *_contentSourceUri;
}

@property(readonly, copy, nonatomic) NSString *contentSourceUri; // @synthesize contentSourceUri=_contentSourceUri;
@property(readonly, copy, nonatomic) NSString *contentSource; // @synthesize contentSource=_contentSource;
@property(readonly, copy, nonatomic) NSString *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSection:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3;

@end

