//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "SPTHubDictionaryTransformable.h"

@class NSString, SPTHubButtonData;

@interface SPTHubBlockHeaderData : NSObject <SPTHubDictionaryTransformable, NSCopying>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_descriptionText;
    NSString *_alignment;
    SPTHubButtonData *_accessoryButtonData;
}

@property(readonly, copy, nonatomic) SPTHubButtonData *accessoryButtonData; // @synthesize accessoryButtonData=_accessoryButtonData;
@property(readonly, copy, nonatomic) NSString *alignment; // @synthesize alignment=_alignment;
@property(readonly, copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 pathSet:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 descriptionText:(id)arg3 alignment:(id)arg4 accessoryButtonData:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

