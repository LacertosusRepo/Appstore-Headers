//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTDefaultSuggestRequestFactory.h"

@class YTActiveVideoNotifier, YTSearchHistory, YTUserDefaults;

@interface YTAppSuggestRequestFactory : YTDefaultSuggestRequestFactory
{
    YTSearchHistory *_searchHistory;
    YTActiveVideoNotifier *_activeVideoNotifier;
    YTUserDefaults *_userDefaults;
}

- (void).cxx_destruct;
- (void)configureURLBuilder:(id)arg1 forSearchQuery:(id)arg2;
- (id)init;

@end

