//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionVideoOverviewNavigationViewModelEntry.h"

@class NSDictionary, NSString, NSURL;

@interface SPTCollectionVideoOverviewNavigationViewModelImplementation : NSObject <SPTCollectionVideoOverviewNavigationViewModelEntry>
{
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *title;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

