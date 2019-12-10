//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMMediaInfo, NSDictionary, NSMutableDictionary, NSString;

@interface InMethod_IMItem : NSObject
{
    NSString *_itemId;
    NSString *originalItemId;
    NSString *itemClass;
    NSDictionary *properties;
    IMMediaInfo *mediaInfo;
    NSMutableDictionary *transientProperties;
    NSString *path;
    NSString *downloadConnectionId;
    NSString *downloadUserId;
    NSString *_originalResourceHash;
}

+ (id)deJSONizeItems:(id)arg1;
+ (id)deJSONize:(id)arg1;
@property(retain, nonatomic) NSString *originalResourceHash; // @synthesize originalResourceHash=_originalResourceHash;
@property(retain, nonatomic) NSString *downloadUserId; // @synthesize downloadUserId;
@property(retain, nonatomic) NSString *downloadConnectionId; // @synthesize downloadConnectionId;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(retain, nonatomic) NSMutableDictionary *transientProperties; // @synthesize transientProperties;
@property(retain, nonatomic) IMMediaInfo *mediaInfo; // @synthesize mediaInfo;
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties;
@property(retain, nonatomic) NSString *itemClass; // @synthesize itemClass;
@property(retain, nonatomic) NSString *originalItemId; // @synthesize originalItemId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)itemOverviewAttributedStringWithFontSize:(double)arg1;
- (id)snapshotImage;
@property(readonly, nonatomic) struct CGSize presentationSize;
@property(readonly, nonatomic) struct CGSize originalPresentationSize;
- (_Bool)isEqualToItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSString *displayName;
@property(readonly, nonatomic) NSString *identifierForPlaybackState;
@property(readonly, nonatomic) NSString *identifierForSettings;
- (id)loadDetailsWithCallback:(CDUnknownBlockType)arg1;
- (void)doLoadDetailsWithCallback:(CDUnknownBlockType)arg1 handle:(id)arg2;
- (void)conserveMemory;
@property(readonly, nonatomic) _Bool local;
- (id)description;
- (id)JSONize;
- (void)didReplaceThumbnail:(id)arg1;
- (void)dealloc;
- (id)init;

@end

