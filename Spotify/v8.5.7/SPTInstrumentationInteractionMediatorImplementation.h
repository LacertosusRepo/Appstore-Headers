//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationInteractionMediator-Protocol.h"

@class NSHashTable, NSString, SPTInstrumentationInteractionItemIDGenerator;
@protocol SPTInstrumentationInteractionIDProvider, SPTInstrumentationInteractionLogger, SPTInstrumentationPageStream;

@interface SPTInstrumentationInteractionMediatorImplementation : NSObject <SPTInstrumentationInteractionMediator>
{
    id <SPTInstrumentationInteractionLogger> _logger;
    NSHashTable *_colleagues;
    id <SPTInstrumentationInteractionIDProvider> _interactionIDProvider;
    SPTInstrumentationInteractionItemIDGenerator *_itemIDGenerator;
    id <SPTInstrumentationPageStream> _pageStream;
}

@property(retain, nonatomic) id <SPTInstrumentationPageStream> pageStream; // @synthesize pageStream=_pageStream;
@property(retain, nonatomic) SPTInstrumentationInteractionItemIDGenerator *itemIDGenerator; // @synthesize itemIDGenerator=_itemIDGenerator;
@property(retain, nonatomic) id <SPTInstrumentationInteractionIDProvider> interactionIDProvider; // @synthesize interactionIDProvider=_interactionIDProvider;
@property(retain, nonatomic) NSHashTable *colleagues; // @synthesize colleagues=_colleagues;
@property(retain, nonatomic) id <SPTInstrumentationInteractionLogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (_Bool)shouldProcessEvent:(id)arg1;
- (void)addPageViewInformationToBuilder:(id)arg1 withInteractionInformation:(id)arg2;
- (id)createDataBuilderWithDefaultsWithInformation:(id)arg1;
- (id)colleaguesToGatherDataFromForInformation:(id)arg1;
- (id)collectInteractionDataFromColleaguesForEvent:(id)arg1 interactionID:(id)arg2;
- (_Bool)willProcessEvent:(id)arg1;
- (void)removeColleague:(id)arg1;
- (void)addColleague:(id)arg1;
- (id)initWithInteractionLogger:(id)arg1 unifiedPageStream:(id)arg2 interactionIDProvider:(id)arg3 itemIDGenerator:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

