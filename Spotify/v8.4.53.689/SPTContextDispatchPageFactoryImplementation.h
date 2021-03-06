//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTContextDispatchPageFactory.h"

@class NSString;

@interface SPTContextDispatchPageFactoryImplementation : NSObject <SPTContextDispatchPageFactory>
{
    id <SPTPageRegistry> _pageRegistry;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTPageRegistry> pageRegistry; // @synthesize pageRegistry=_pageRegistry;
- (void).cxx_destruct;
- (id)offlinePageForURI:(id)arg1;
- (id)errorPageForError:(unsigned long long)arg1 URI:(id)arg2;
- (id)pageForURI:(id)arg1 referrer:(id)arg2;
- (id)initWithPageRegistry:(id)arg1 linkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

