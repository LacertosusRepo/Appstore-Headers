//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTVideoSubtitle;

@interface SPTVideoSubtitleConfigurator : NSObject
{
    id <SPTVideoSubtitle> _subtitle;
}

@property(retain, nonatomic) id <SPTVideoSubtitle> subtitle; // @synthesize subtitle=_subtitle;
- (void).cxx_destruct;
- (id)localizedNameForSubtitle;
- (id)initWithSubtitle:(id)arg1;

@end
