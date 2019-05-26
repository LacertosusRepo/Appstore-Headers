//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVideoSubtitle.h"

@class NSMutableArray, NSString;

@interface SPTVideoSubtitleImpl : NSObject <SPTVideoSubtitle>
{
    _Bool _closedCaption;
    NSMutableArray *_langtagComponents;
    NSString *_langtag;
    NSString *_language;
}

+ (_Bool)langtagComponentsHasClosedCaption:(id)arg1;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSString *langtag; // @synthesize langtag=_langtag;
@property(retain, nonatomic) NSMutableArray *langtagComponents; // @synthesize langtagComponents=_langtagComponents;
@property(nonatomic, getter=isClosedCaption) _Bool closedCaption; // @synthesize closedCaption=_closedCaption;
- (void).cxx_destruct;
- (void)addClosedCaptionSubtitleComponentsIfNeeded;
- (void)removeClosedCaptionSubtitleComponentsIfNeeded;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (unsigned long long)compareScore:(id)arg1;
- (id)localisedName;
- (_Bool)isOffSubtitle;
- (id)components;
- (id)initWithLangtag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
