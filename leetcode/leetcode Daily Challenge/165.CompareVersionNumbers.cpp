var compareVersion = function(version1, version2) {
    v1 = version1.split('.');
    v2 = version2.split('.');
    m = Math.max(v1.length , v2.length)
    while(v1.length < m) {
        v1.push('0')
    }
    while(v2.length < m) {
        v2.push('0')
    }
    i = 0
    while(i < m) {
       if(Number(v1[i]) !== Number(v2[i])) {
        if(Number(v1[i]) > +v2[i]) return 1;
        else return -1;
       }
       i++;
    }
    return 0;
};
