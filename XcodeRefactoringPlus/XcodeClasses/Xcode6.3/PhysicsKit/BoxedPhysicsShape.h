//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface BoxedPhysicsShape : NSObject
{
    int shapeType;
    NSArray *points;
}

+ (id)boxPhysicsShape:(struct PKPhysicsShape *)arg1;
- (void).cxx_destruct;
- (struct PKPhysicsShape *)unboxShape;

@end