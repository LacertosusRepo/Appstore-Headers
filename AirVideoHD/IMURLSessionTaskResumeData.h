//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface IMURLSessionTaskResumeData : NSObject
{
    NSMutableDictionary *dictionary;
    unsigned long long format;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesReceived;
@property(retain, nonatomic) NSURL *URL;
@property(retain, nonatomic) NSString *localPath;
- (id)createData;
- (id)initWithData:(id)arg1;

@end

