//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTInstrumentationInteractionData.h"

@class NSString, NSURL;

@interface SPTInstrumentationInteractionDataImplementation : NSObject <SPTInstrumentationInteractionData>
{
    NSString *_itemID;
    NSString *_interactionType;
    NSString *_interactionIntent;
    NSString *_pageIdentifier;
    NSURL *_pageURI;
}

@property(copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(copy, nonatomic) NSString *interactionIntent; // @synthesize interactionIntent=_interactionIntent;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (id)initWithItemID:(id)arg1 interactionType:(id)arg2 interactionIntent:(id)arg3 pageIdentifier:(id)arg4 pageURI:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

