from matplotlib import font_manager

fontP = font_manager.FontProperties()
fontP.set_family('SimHei')
fontP.set_size(14)

fig = pd.DataFrame({
    '债券收益率':bond,
    '债券型基金收益率':bondFunds,
    '被动指数型基金收益率':indexFunds,
    '总收益率':ret})
fig.plot()

# Note the next lines
plt.legend(loc=0, prop=fontP)
plt.title('债券收益率', fontproperties=fontP)

plt.grid(True)
plt.axis('tight')