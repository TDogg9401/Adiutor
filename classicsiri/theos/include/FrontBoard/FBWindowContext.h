//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBWindowContext : NSObject
{
    unsigned int _contextID;
    float _level;
    unsigned int _identifier;
}

+ (id)contextWithID:(unsigned int)arg1 level:(float)arg2;
+ (id)contextWithFBSContext:(id)arg1;
@property(readonly, nonatomic) float level; // @synthesize level=_level;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithContextID:(unsigned int)arg1 level:(float)arg2;

@end

