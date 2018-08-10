//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SPTGLSLProgramFormat : NSObject
{
    NSString *_vertexShaderName;
    NSString *_fragmentShaderName;
    NSDictionary *_attribLocations;
    long long _feedbackFormat;
    NSArray *_feedbackVaryings;
}

@property(retain, nonatomic) NSArray *feedbackVaryings; // @synthesize feedbackVaryings=_feedbackVaryings;
@property(nonatomic) long long feedbackFormat; // @synthesize feedbackFormat=_feedbackFormat;
@property(retain, nonatomic) NSDictionary *attribLocations; // @synthesize attribLocations=_attribLocations;
@property(readonly, nonatomic) NSString *fragmentShaderName; // @synthesize fragmentShaderName=_fragmentShaderName;
@property(readonly, nonatomic) NSString *vertexShaderName; // @synthesize vertexShaderName=_vertexShaderName;
- (void).cxx_destruct;
- (id)initWithVertexShaderName:(id)arg1 fragmentShaderName:(id)arg2 attribLocations:(id)arg3 feedbackFormat:(long long)arg4;

@end

