//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTInstrumentationPageViewData : NSObject
{
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    NSString *_navigationRootIdentifier;
}

@property(readonly, nonatomic) NSString *navigationRootIdentifier; // @synthesize navigationRootIdentifier=_navigationRootIdentifier;
@property(readonly, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (id)initWithPageIdentifier:(id)arg1 pageURI:(id)arg2 navigationRootIdentifier:(id)arg3;

@end

