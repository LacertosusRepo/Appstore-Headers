//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FBSDKGraphRequestDataAttachment : NSObject
{
    NSString *_contentType;
    NSData *_data;
    NSString *_filename;
}

@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 filename:(id)arg2 contentType:(id)arg3;

@end

