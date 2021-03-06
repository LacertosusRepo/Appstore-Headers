//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCeramicBlock.h"
#import "SPTHubBlock.h"
#import "SPTHubDictionaryTransformable.h"

@class NSArray, NSMutableArray, NSNumber, NSString, NSURL, SPTHubBlockFooterData, SPTHubBlockHeaderData;

@interface SPTHubBlockImplementation : NSObject <SPTCeramicBlock, SPTHubBlock, SPTHubDictionaryTransformable>
{
    _Bool _needsRenderingUpdate;
    NSString *_identifier;
    NSNumber *_preferredIndex;
    NSString *_contentIdentifier;
    NSString *_componentIdentifier;
    SPTHubBlockHeaderData *_headerData;
    SPTHubBlockFooterData *_footerData;
    NSURL *_backgroundImageURL;
    NSMutableArray *_mutableItems;
}

@property(readonly, nonatomic) NSMutableArray *mutableItems; // @synthesize mutableItems=_mutableItems;
@property(nonatomic) _Bool needsRenderingUpdate; // @synthesize needsRenderingUpdate=_needsRenderingUpdate;
@property(copy, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(retain, nonatomic) SPTHubBlockFooterData *footerData; // @synthesize footerData=_footerData;
@property(retain, nonatomic) SPTHubBlockHeaderData *headerData; // @synthesize headerData=_headerData;
@property(copy, nonatomic) NSString *componentIdentifier; // @synthesize componentIdentifier=_componentIdentifier;
@property(readonly, copy, nonatomic) NSString *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(copy, nonatomic) NSNumber *preferredIndex; // @synthesize preferredIndex=_preferredIndex;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) NSArray *items;
- (id)initWithDictionary:(id)arg1 pathSet:(id)arg2;
- (id)initWithIdentifier:(id)arg1 preferredIndex:(id)arg2 contentIdentifier:(id)arg3 componentIdentifier:(id)arg4 items:(id)arg5 headerData:(id)arg6 footerData:(id)arg7 backgroundImageURL:(id)arg8 needsRenderingUpdate:(_Bool)arg9;
@property(readonly, copy, nonatomic) NSString *headerAlignment;
@property(readonly, copy, nonatomic) NSURL *footerActionURL;
@property(readonly, copy, nonatomic) NSString *footerTitle;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, nonatomic) long long renderType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

