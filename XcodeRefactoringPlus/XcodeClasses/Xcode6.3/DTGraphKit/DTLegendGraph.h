//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface DTLegendGraph : DTBarGraph
{
}

- (struct CGRect)calculateXAxisBoundsWithinBounds:(struct CGRect)arg1;
- (struct CGRect)calculateYAxisBoundsWithinBounds:(struct CGRect)arg1;
- (void)drawXAxis:(struct CGRect)arg1;
- (void)drawContent:(struct CGRect)arg1;
- (void)drawBorder:(struct CGRect)arg1;
- (void)drawYAxis:(struct CGRect)arg1;
- (void)drawBackground:(struct CGRect)arg1;
- (void)clearCache;

@end