//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTDrivingModePivotItem : NSObject
{
    NSURL *_uri;
    NSString *_title;
    NSString *_subtitle;
    NSString *_identifier;
    NSURL *_imageUrl;
    long long _placeholderIcon;
    long long _subtitleIcon;
}

+ (id)pivotItemWithURI:(id)arg1 title:(id)arg2 subtitle:(id)arg3 subtitleIcon:(long long)arg4 image:(id)arg5 placeholderIcon:(long long)arg6 identifier:(id)arg7;
+ (id)pivotItemWithURI:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4 placeholderIcon:(long long)arg5 identifier:(id)arg6;
+ (id)pivotItemWithURI:(id)arg1 title:(id)arg2 subtitle:(id)arg3 identifier:(id)arg4;
+ (id)pivotItemWithURI:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)pivotItemWithURI:(id)arg1;
@property(readonly, nonatomic) long long subtitleIcon; // @synthesize subtitleIcon=_subtitleIcon;
@property(readonly, nonatomic) long long placeholderIcon; // @synthesize placeholderIcon=_placeholderIcon;
@property(readonly, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isEqualToPivotItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 subtitleIcon:(long long)arg3 imageUrl:(id)arg4 placeholderIcon:(long long)arg5 uri:(id)arg6 identifier:(id)arg7;

@end

