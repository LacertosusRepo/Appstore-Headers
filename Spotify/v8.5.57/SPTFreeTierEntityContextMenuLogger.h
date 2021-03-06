//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol SPTUBILogger;

@interface SPTFreeTierEntityContextMenuLogger : NSObject
{
    NSString *_featureIdentifier;
    NSURL *_pageURI;
    id <SPTUBILogger> _ubiLogger;
}

@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (void)logRevealContextMenu;
- (id)initWithFeatureIdentifier:(id)arg1 pageURI:(id)arg2 ubiLogger:(id)arg3;

@end

