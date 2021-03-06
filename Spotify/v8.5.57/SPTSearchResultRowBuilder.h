//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTSearchResultRowBuilder : NSObject
{
}

+ (id)loggingDataForEntity:(id)arg1 drilldown:(_Bool)arg2 position:(unsigned long long)arg3 ubiLocationSerializer:(id)arg4;
+ (void)addUIILoggingDataToRow:(id)arg1 sectionID:(id)arg2 requestID:(id)arg3 pageURI:(id)arg4 itemIndex:(id)arg5;
+ (_Bool)displayItemAsDisabledIsExplicit:(_Bool)arg1 isMogef19:(_Bool)arg2 explicitContentEnabled:(_Bool)arg3 ageRestrictedContentEnabled:(_Bool)arg4;
+ (id)customDataSubtitleAccessoryLabelForTrack:(id)arg1;
+ (long long)accessoryIconRightForEntity:(id)arg1 onDemandAllowed:(_Bool)arg2;
+ (id)customDataForEntity:(id)arg1 onDemandAllowed:(_Bool)arg2 explicitContentEnabled:(_Bool)arg3 ageRestrictedContentEnabled:(_Bool)arg4 podcastRowsType:(unsigned long long)arg5;
+ (id)metadataForEntity:(id)arg1 explicitContentEnabled:(_Bool)arg2;
+ (id)navigateCommandForEntity:(id)arg1;
+ (id)saveToHistoryCommandForEntity:(id)arg1 podcastRowsType:(unsigned long long)arg2;
+ (id)playTrackCommandForEntity:(id)arg1 query:(id)arg2 referrerIdentifier:(id)arg3;
+ (id)sequentialCommandWithCommands:(id)arg1;
+ (id)commandsForEntity:(id)arg1 query:(id)arg2 referrerIdentifier:(id)arg3 podcastRowsType:(unsigned long long)arg4 explicitContentEnabled:(_Bool)arg5 ageRestrictedContentEnabled:(_Bool)arg6 onDemandAllowed:(_Bool)arg7;
+ (id)accessoryTitleForEntity:(id)arg1 podcastRowsType:(unsigned long long)arg2;
+ (id)defaultRowComponentIdentifier;
+ (id)componentIdentifierForEntity:(id)arg1 podcastRowsType:(unsigned long long)arg2;
+ (id)rowForEntity:(id)arg1 componentModelIdentifier:(id)arg2 drilldown:(_Bool)arg3 onDemandAllowed:(_Bool)arg4 explicitContentEnabled:(_Bool)arg5 ageRestrictedContentEnabled:(_Bool)arg6 query:(id)arg7 referrerIdentifier:(id)arg8 podcastRowsType:(unsigned long long)arg9 sectionID:(id)arg10 requestID:(id)arg11 pageURI:(id)arg12 position:(long long)arg13 ubiLocationSerializer:(id)arg14;

@end

